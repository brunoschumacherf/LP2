def encode(str)
  @array = ['G', 'g', 'A', 'a', 'D', 'd', 'E', 'e', 'R', 'r', 'Y', 'y', 'P', 'p', 'O', 'o', 'L', 'l', 'U', 'u', 'K', 'k', 'I', 'i']
  @array1 = ['A', 'a', 'G', 'g', 'E', 'e', 'D', 'd', 'Y', 'y', 'R', 'r', 'O','o', 'P', 'p', 'U', 'u', 'L', 'l', 'I', 'i', 'K', 'k']
  for i in 0..(str.size) do
    j = 0;
    includ = false
    @array.map do |a|
      if str[i] == a
        includ = true;
        break;
      end
      j +=1
    end
    if includ
      str[i] = @array1[j]
    end
  end
  return str
end

def decode(str)
  @array = ['G', 'g', 'A', 'a', 'D', 'd', 'E', 'e', 'R', 'r', 'Y', 'y', 'P', 'p', 'O', 'o', 'L', 'l', 'U', 'u', 'K', 'k', 'I', 'i']
  @array1 = ['A', 'a', 'G', 'g', 'E', 'e', 'D', 'd', 'Y', 'y', 'R', 'r', 'O','o', 'P', 'p', 'U', 'u', 'L', 'l', 'I', 'i', 'K', 'k']
    for i in 0..(str.size) do
    j = 0;
    includ = false
    @array1.map do |a|
      if str[i] == a
        includ = true;
        break;
      end
      j += 1
    end
    if includ
      str[i] = @array[j]
    end
  end
  str
end

str = decode('BYLNP')
puts str